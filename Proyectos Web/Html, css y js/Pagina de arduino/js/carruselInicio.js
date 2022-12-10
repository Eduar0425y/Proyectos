var imagenCarrusel = 0;
carrusel();

function carrusel() {
  var cantImagenes = document.getElementsByClassName("imagenesCarrusel");
  for (var i = 0; i < cantImagenes.length; i++) {
    cantImagenes[i].style.display = "none";  
  }
  imagenCarrusel++;
  if (imagenCarrusel > cantImagenes.length) {imagenCarrusel = 1}    
  
  cantImagenes[imagenCarrusel-1].style.display = "block";  
  setTimeout(carrusel, 5000); 
}