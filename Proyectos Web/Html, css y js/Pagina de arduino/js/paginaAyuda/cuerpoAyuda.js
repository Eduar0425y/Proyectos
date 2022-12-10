let ingresoDatos = `<h3 class="textoCuadroAyuda">Centro de ayuda<h3>`;

var nombreColIzquierda = [];
var forIdyNombre = [];

nombreColIzquierda [0] = "Nombre";
nombreColIzquierda [1] = "Apellido";
nombreColIzquierda [2] = "Correo electronico";

forIdyNombre [0] = "nombre";
forIdyNombre [1] = "apellido";
forIdyNombre [2] = "correoElectronico";


ingresoDatos += `<div class="cuadroIngresoDatos">`;
ingresoDatos += `<p class="textoDentroCuadroAyuda">Ingrese sus datos y su queja/suguerencia.</p>`;
ingresoDatos += `<div class="contenedorFormulario"><form>`;

for (var x=0; x<3; x++){
    ingresoDatos += `<div class="divTextoEspacio">
    <div class="columnasIzquierda">
      <label for="` + forIdyNombre[x] +` ">` + nombreColIzquierda[x] +`</label>
    </div>
    <div class="columnasDerecha">
      <input type="text" id="` + forIdyNombre[x] +` " name="` + forIdyNombre[x] +` 
      " placeholder=" Escriba su `+ nombreColIzquierda[x] + `">
    </div>
  </div>`;
}

ingresoDatos += `<div class="divTextoEspacio">
    <div class="columnasIzquierda">
      <label for="queja">Queja/Suguerencia</label>
    </div>
    <div class="columnasDerecha">
    <textarea id="queja" name="queja" placeholder="Escriba su queja o suguerencia" class="cuadroTexto"></textarea>
    </div>
  </div>`;

  ingresoDatos += `<div class="divTextoEspacio">
  <input type="submit" value="Enviar" onclick="avisoEnvio(1)">
</div>`;


ingresoDatos += `</div>`
ingresoDatos += `</form>`;

ingresoDatos += `</div>`


document.getElementById("cuerpoAyudaIngresoDatos").innerHTML = ingresoDatos;


function avisoEnvio(enviado){
    if (enviado == 1){
        window.alert ("Sus datos han sido enviados.\nNuestro equipo se encargará de ayudarle")
    }
}