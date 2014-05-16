(function ($) {
    Drupal.behaviors.book_address_delete_and_show = {
        attach: function (context, settings) {

            // всплывающее окно delete
            $("#delete_id").click(function(e) {
                if(!confirm('Do you really want to delete this item?')) {
                    e.preventDefault();
                }
            });

            // пошаговое заполнение формы
            function hide() {
                $('.form-item-first_name').hide();
                $('.form-item-last_name').hide();
                $('#edit-field-category').hide();
                $('#edit-field-photo').hide();
                $('#field-phone-add-more-wrapper').hide();
                $('#edit-field-email').hide();
                $('#field-birthday-add-more-wrapper').hide();
                $('#edit-field-notes').hide();
                $('#prev').hide();
                $('#submit').hide();
                $('#next').hide();
                $('input[name="field_photo_und_0_upload_button"]').hide();
            }
            if(typeof page == 'undefined') {
                var page = 1;
                pageCheck();
                $('#next').bind('click', function(e) {
                    page++; // раскрытие след. полей
                    pageCheck();
                    e.preventDefault();
                });
                $('#prev').bind('click', function(e) {
                    page--; // сворачивание полей
                    pageCheck();
                    e.preventDefault();
                });
            }

            // функция проверяет какое значение приходит для page, т.е. была нажата кнопка next или prev
            function pageCheck() {
                if (page == 1) {
                    hide();
                    $('.form-item-first_name').show();
                    $('.form-item-last_name').show();
                    $('#edit-field-category').show();
                    $('#next').show();
                }
                else if(page == 2) {
                    hide();
                    $('#edit-field-photo').show();
                    $('#edit-field-category').show();
                    $('#prev').show();
                    $('#next').show();

                }
                else {
                    hide();
                    $('#edit-field-category').show();
                    $('#field-phone-add-more-wrapper').show();
                    $('#edit-field-email').show();
                    $('#field-birthday-add-more-wrapper').show();
                    $('#edit-field-notes').show();
                    $('#prev').show();
                    $('#submit').show();
                }
            }
        }
    };
})(jQuery);