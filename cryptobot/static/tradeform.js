jQuery(document).ajaxSend(function(event, xhr, settings) {
function getCookie(name) {
    var cookieValue = null;
    if (document.cookie && document.cookie != '') {
        var cookies = document.cookie.split(';');
        for (var i = 0; i < cookies.length; i++) {
            var cookie = jQuery.trim(cookies[i]);
            // Does this cookie string begin with the name we want?
            if (cookie.substring(0, name.length + 1) == (name + '=')) {
                cookieValue = decodeURIComponent(cookie.substring(name.length + 1));
                break;
            }
        }
    }
    return cookieValue;
}
function sameOrigin(url) {
    // url could be relative or scheme relative or absolute
    var host = document.location.host; // host + port
    var protocol = document.location.protocol;
    var sr_origin = '//' + host;
    var origin = protocol + sr_origin;
    // Allow absolute or scheme relative URLs to same origin
    return (url == origin || url.slice(0, origin.length + 1) == origin + '/') ||
        (url == sr_origin || url.slice(0, sr_origin.length + 1) == sr_origin + '/') ||
        // or any other URL that isn't scheme relative or absolute i.e relative.
        !(/^(\/\/|http:|https:).*/.test(url));
}
function safeMethod(method) {
    return (/^(GET|HEAD|OPTIONS|TRACE)$/.test(method));
}

if (!safeMethod(settings.type) && sameOrigin(settings.url)) {
    xhr.setRequestHeader("X-CSRFToken", getCookie('csrftoken'));
}
});

$(document).ready(function() {
    $("#option-buy").change(function() {
        $(".currency1-below").html("Dollars");
        $(".division-symbol").html("÷");
        $(".currency2-below").html("Bitcoin");
    });
    $("#option-sell").change(function() {
        $(".currency1-below").html("Bitcoin");
        $(".division-symbol").html("×");
        $(".currency2-below").html("Dollars");
    });

    $(".final-button").click(function() {
        var tobuy = $("#option-buy").is(':checked');
        var marketorder = $("#option-market").is(':checked');
        var curr1 = $("#currency1-amount").val();
        var exchange = $("#curr2-per-curr1").val();
        var curr2 = $("#currency2-amount").val();
        $.post("/trades_to_django/", {
            tobuy: tobuy, 
            marketorder: marketorder,
            curr1: curr1,
            exchange: exchange,
            curr2: curr2}, 
            function(data) {
                alert("data loaded: " + data);
        });
    });
});
