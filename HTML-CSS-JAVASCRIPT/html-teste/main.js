document.addEventListener("DOMContentLoaded", function() {
    // Adiciona evento de clique aos itens do menu para mostrar/ocultar a lista
    const menuItems = document.querySelectorAll("#menu a");
    menuItems.forEach(function(item) {
        item.addEventListener("click", function() {
            const lista = document.querySelector(".Lista");
            if (lista.style.display === "none") {
                lista.style.display = "flex";
            } else {
                lista.style.display = "none";
            }
        });
    });

    // Adiciona funcionalidade de pesquisa
    const searchInput = document.getElementById("search-input");
    searchInput.addEventListener("input", function() {
        const searchTerm = this.value.toLowerCase();
        const listaItens = document.querySelectorAll(".Lista ul li");
        listaItens.forEach(function(item) {
            const text = item.textContent.toLowerCase();
            if (text.includes(searchTerm)) {
                item.style.display = "block";
            } else {
                item.style.display = "none";
            }
        });
    });

    // Adiciona animação de destaque aos itens da lista
    const listaItens = document.querySelectorAll(".Lista ul li");
    listaItens.forEach(function(item) {
        item.addEventListener("mouseenter", function() {
            this.style.backgroundColor = "#ffae42";
        });
        item.addEventListener("mouseleave", function() {
            this.style.backgroundColor = "white";
        });
    });

    // Adiciona funcionalidade para exibir o formulário de contato ao clicar em "Contato"
    const contatoLink = document.getElementById("contato");
    const contatoForm = document.getElementById("contato-form");
    contatoLink.addEventListener("click", function(event) {
        event.preventDefault(); // Evita que o link abra outra página
        contatoForm.style.display = "block";
    });

    // Adiciona funcionalidade para exibir informações "Sobre nós" ao clicar em "Sobre"
    const sobreLink = document.getElementById("sobre");
    const sobreInfo = document.getElementById("sobre-info");
    sobreLink.addEventListener("click", function(event) {
        event.preventDefault(); // Evita que o link abra outra página
        sobreInfo.style.display = "block";
    });
});
document.addEventListener("DOMContentLoaded", function() {
    // Seleciona todos os links do menu
    var menuLinks = document.querySelectorAll("#menu a");

    // Itera sobre cada link do menu
    menuLinks.forEach(function(link) {
        // Adiciona um event listener para o evento de clique
        link.addEventListener("click", function(event) {
            // Previne o comportamento padrão do clique, que é seguir o link
            event.preventDefault();
            
            // Obtém o href do link clicado
            var href = link.getAttribute("href");
            
            // Redireciona para o href do link clicado
            window.location.href = href;
        });
    });
});
