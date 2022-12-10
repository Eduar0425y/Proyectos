let redesSociales = `<div class="textoContacto">`;
let tipo = ["iconosRedesSocialesFacebook", "iconosRedesSocialesTwitter", "iconosRedesSocialesIg"];
var icono = [];
var link = [];
var contadorRed = 0; 

icono [0] = "imagenes/iconoFaceboock.png";
icono [1] = "imagenes/iconoTwitter.png";
icono [2] = "imagenes/iconoIg.png";
link [0] = "https://www.facebook.com/profile.php?id=100076397861818";
link [1] = "https://twitter.com/BarakArduino";
link [2] = "https://www.instagram.com/xavier_4520/";


redesSociales += `<h1>Contactanos</h1></div>`;


redesSociales += ` <div class="divIconos">`;

for (const x of tipo){
    redesSociales += ` <div class= "${x}">`;
    redesSociales += `<a href="` + link[contadorRed] +`">` 
    redesSociales += `<img src= "` + icono[contadorRed] +`" width="40px" height="auto">`
    redesSociales += `</a>`;
    redesSociales += `</div>`;
    contadorRed += 1;
}

redesSociales += `</div>`

document.getElementById("divRedesSociales").innerHTML = redesSociales;