$(document).ready(function(){
    $("#formulario").submit(function(event){
        //Prevenir que a pagina do action seja carregada
        event.preventDefault();
        //Guardar array com respostas slecionadas
        var answers = $("input.checked");
        //Guardar array com respostas corretas
        var matrix = {
            "quesst1": "b",
            "quesst2": "c",
            "quesst3": "c",
            "quesst4": "a",
            "quesst5": "b",
            "quesst6": "1"
        };
    });
});