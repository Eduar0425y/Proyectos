let titulo = ` <div>`;

titulo += `<div class="titulo">
<div class="logosBarak">
    <a href="inicio.html">
        <img src="imagenes/logoFinalPagina.jpg" class="logoHeader">
    </a>
</div>

</div>

<div class="contenedorNav">
<ul class="columnasMenuNav">
    <li class="filasMenuNav">
        <a class="botonMenuNav" href="inicio.html">Inicio</a>
    </li>
    <li class="filasMenuNav">
        <a class="botonMenuNav" href="index.html">Definicion</a>
    </li>
    <li class="filasMenuNav">
        <a class="botonMenuNav" href="arduinos.html">Tipos</a>
    </li>
    <li class="filasMenuNav">
        <a class="botonMenuNav" href="sensores.html">Sensores</a>
    </li>
    <li class="filasMenuNav">
        <a class="botonMenuNav" href="descargas.html">Descargas</a>
    </li>
    <li class="filasMenuNavDerecha">
        <a class="botonMenuNavDerecha" href="ayuda.html">Ayuda</a>
    </li>
</ul>
</div>

</div>`;

document.getElementById("header").innerHTML = titulo;
