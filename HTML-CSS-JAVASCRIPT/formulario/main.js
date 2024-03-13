/*
    Inicialização do jQuery
*/
$(document).ready(function(){
    //mostra texto na consola quando o documento esta pronto
    console.log("o documento esta pronto");

    $("input, textarea").on("focusin focusout", function(event){
        /* $(this) refere-se ao elemento seleccionado nesta funçao */
        $(this).toggleClass("border-form");
        // mostrar detalhes do evento na consola
        //console.log(event);
    });

    //quando o formulario for submetido
    $("#loader").hide(); // esconder o loader
    $("form").on("submit", function(event) {
        //log q o evento aconteceu
        console.log("submit");
        //gravar valores do form em vars
        var nome = $("input#name").val();
        var username = $("input#username").val();
        var email = $("input#email").val();
        var birthday = $("input#nascimento").val();
        console.log(nome); 
        //construir frase numa var
        var frase = "Olá "+nome+", o seu username "+username+
            " com data de nascimento "+birthday+
            ", foi registado para o email "+email+"!";
        console.log(frase);
        //prevenir açao default = que a pagina seja recarregada
        event.preventDefault();
        //mostrar loader
        $("#loader").fadeIn(2000, function(){ //callback
            console.log("fadeIn completo");
            $(this).find(".box").append("<p>"+frase+"</p>");
            //mudar texto
            $(this).find("span").text("Registo efetuado");
            //funcionamento do botao fechar
            $(this).find('.close').on("click", function(){
                $("#loader").fadeOut(600);
            });
        });
    });

});