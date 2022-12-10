var r=0;
var x=0;
function tarjeta(edu){
    if (edu=1){
        x=x+1;
    }

    if (x == 1){
        document.getElementById("tarjeta1").style.visibility = "hidden";
    }
    if (x == 2){
        document.getElementById("tarjeta1").style.visibility = "visible";
        document.getElementById("tarjeta2").style.visibility = "hidden";
    }
    if (x == 3){
        document.getElementById("tarjeta2").style.visibility = "visible";
        document.getElementById("tarjeta3").style.visibility = "hidden";
    }
    if (x==4){
        document.getElementById("tarjeta3").style.visibility = "visible";
        document.getElementById("botonesTarjetas").style.display = "none";
    }

    if (x==5){
        document.getElementById("textoTal").style.display = "none";
    }

    if (x==6){
        document.getElementById("propuesta").style.display = "none";
        document.getElementById("imgBB").style.opacity = "1";
    }

}
