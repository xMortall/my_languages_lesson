$(document).ready(function(){
    var question = $("dl");
    var description = $("dd");

    description.hide();
    question.on("click", function(){
        var thisQ = $(this);
        var imageSrc = '';

        if (thisQ.is(".open")){
            thisQ.find("dd").slideUp(function(){
                thisQ.removeClass("open");
                $('#corner-image').attr('src', 'default.jpg'); // Imagem padrão quando a aba está fechada
            });
        } else {
            thisQ.find("dd").slideDown(function(){
                $(this).closest("dl").addClass("open");
            });

            // Altere a imagem com base na aba ativa
            if (thisQ.attr('id') === 'tab1') {
                imageSrc = 'imagem1.jpg';
            } else if (thisQ.attr('id') === 'tab2') {
                imageSrc = 'imagem2.jpg';
            } else if (thisQ.attr('id') === 'tab3') {
                imageSrc = 'imagem3.jpg';
            } else if (thisQ.attr('id') === 'tab4') {
                imageSrc = 'imagem4.jpg';
            } else if (thisQ.attr('id') === 'tab5') {
                imageSrc = 'imagem5.jpg';
            } else if (thisQ.attr('id') === 'tab6') {
                imageSrc = 'imagem6.jpg';
            } else if (thisQ.attr('id') === 'tab7') {
                imageSrc = 'imagem7.jpg';
            }

            $('#corner-image').attr('src', imageSrc);
        }

        if(thisQ.siblings(".open")){
            thisQ.siblings(".open").find("dd").slideUp(function(){
                $(this).closest(".open").removeClass("open");
            });
        }
    });
});
