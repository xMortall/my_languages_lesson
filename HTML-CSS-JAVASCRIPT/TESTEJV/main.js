// Nome: Emanuel Borges

$(document).ready(function() {
    var $colorsDt = $('#colors dt');
    var $colorsDdImg = $('#colors dd img');
    var $selectedColorSpan = $('#selectedColor span');
    var $chooseColorText = $('#colors h4');

    function handleColorClick() {

        $colorsDt.removeClass('active').addClass('inactive');
        $(this).removeClass('inactive').addClass('active');

        var selectedColor = $(this).text();
        $selectedColorSpan.text(selectedColor);

        var $selectedImage = $(this).siblings('dd').find('img');
        $colorsDdImg.stop(true, true).fadeOut();

        $selectedImage.stop(true, true).fadeIn();
        $chooseColorText.fadeOut();
    }
    $colorsDdImg.hide();
    $colorsDt.on('click', handleColorClick);
});
