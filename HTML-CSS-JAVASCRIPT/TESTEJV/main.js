// Nome: Emanuel Borges

$(document).ready(function() {
    function handleColorClick() {
        $('#colors dt').removeClass('active').addClass('inactive');
        $(this).removeClass('inactive').addClass('active');

        let selectedColor = $(this).text();
        $('#selectedColor span').text(selectedColor);

        let selectedImage = $(this).siblings('dd').find('img');
        $('#colors dd img').stop(true, true).fadeOut();
        selectedImage.stop(true, true).fadeIn();
    }

    $('#colors dd img').hide();
    $('#colors dt').on('click', handleColorClick);
});
