import subprocess

def get_networks():
    try:
        information_command = subprocess.check_output("netsh wlan show profiles", encoding="utf-8", shell=True)
        networks = []
        for line in information_command.split('\n'):
            if "Todos os Perfis de Usuários" in line:
                position = line.find(":")
                network = line[position + 2:]
                password = information_network(network)
                networks.append(network + " - " + password)
        return networks
    except subprocess.CalledProcessError as e:
        print(f"Erro ao executar o comando: {e}")
        return []

def information_network(wifi):
    try:
        information_command = subprocess.check_output(["netsh", "wlan", "show", "profile", wifi, "key", "=", "clear"],
                                                      encoding="utf-8", shell=True)
        network = ''
        for line in information_command.split('\n'):
            if "Conteúdo da Chave" in line:
                position = line.find(":")
                network = line[position + 2:]
                break
        return network
    except subprocess.CalledProcessError as e:
        print(f"Erro ao executar o comando para {wifi}: {e}")
        return "Erro ao obter a senha"

if __name__ == "__main__":
    print(get_networks())
