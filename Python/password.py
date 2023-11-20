import subprocess

command = subprocess.check_output(['/usr/sbin/iwconfig']).decode('utf-8').split('\n')
wireless_interfaces = [line.split(" ")[0] for line in command if "IEEE 802.11" in line]

# Use a primeira interface sem fio encontrada
if wireless_interfaces:
    interface_name = wireless_interfaces[0]
else:
    print("Nenhuma interface sem fio encontrada.")
    exit()

command = subprocess.check_output(['iwlist', interface_name, 'scan']).decode('utf-8').split('\n')
profiles = [i.split(":")[1][1:-1] for i in command if "ESSID" in i]

for i in profiles:
    try:
        results = subprocess.check_output(['iwconfig', interface_name, 'essid', i]).decode('utf-8').split('\n')
        results = [b.split(" ")[22][6:] for b in results if "IE: IEEE 802.11i/WPA2" in b]
        print("{:<30}|  {:<}".format(i, results[0]))
    except IndexError:
        print("{:<30}|  {:<}".format(i, ""))
input("")
