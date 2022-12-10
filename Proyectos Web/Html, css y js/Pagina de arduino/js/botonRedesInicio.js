function redes(boton){
    if (boton == 0){
        document.getElementById("contenedorIconos").style.right = "-90px";
        document.getElementById("contenedorRedesBoton").style.right = "0px";
        document.getElementById("contenedorIconos").style.visibility = "hidden";
        document.getElementById("contenedorIconos").style.display = "none";
    }

    if (boton == 1){
        document.getElementById("contenedorIconos").style.animationName = "animacionRedescontenedor";
        document.getElementById("contenedorIconos").style.right = "0px";
        document.getElementById("contenedorIconos").style.visibility = "visible";
        document.getElementById("contenedorIconos").style.display = "block";
        document.getElementById("contenedorRedesBoton").style.right = "90px";
    }
}