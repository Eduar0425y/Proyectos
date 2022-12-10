function referenciaBoton(tipoPc){
    
    var textoSistemas

    if(tipoPc == 1 ){
        document.getElementById("botonDescargar").href = 
        "https://drive.google.com/file/d/1mMaomqfCiMrUfXbFwftOpM-Kw46R32k8/view?usp=sharing";
        document.getElementById("botonDescargar").style.visibility = "visible";
        document.getElementById("botonDescargar").style.color = "white";
        textoSistemas = "Windows 7"
    }

    else if(tipoPc == 2 ){
        document.getElementById("botonDescargar").href = 
        "https://www.microsoft.com/es-co/p/arduino-ide/9nblggh4rsd8?ocid=badge&rtc=1&activetab=pivot:overviewtab"
        document.getElementById("botonDescargar").style.visibility = "visible";
        document.getElementById("botonDescargar").style.color = "white";
        textoSistemas = "Windows 8.1 - 10"
    }

    else if(tipoPc == 3 ){
        document.getElementById("botonDescargar").href = 
        "https://drive.google.com/file/d/1hO4K9XHynLtEyxQhrwYkxEIkIUiyb9v8/view?usp=sharing"
        document.getElementById("botonDescargar").style.visibility = "visible";
        document.getElementById("botonDescargar").style.color = "white";
        textoSistemas = "MAC OS X"
    }

    else if(tipoPc == 4 ){
        document.getElementById("botonDescargar").href = 
        "https://drive.google.com/file/d/14l5qv37gIGNnX5I5VULHewOa352YX8kE/view?usp=sharing"
        document.getElementById("botonDescargar").style.visibility = "visible";
        document.getElementById("botonDescargar").style.color = "white";
        textoSistemas = "Linux x32 bits"
    }

    else if(tipoPc == 5 ){
        document.getElementById("botonDescargar").href = 
        "https://drive.google.com/file/d/1kzLBDrblJ79XQ9usW7RkGVlLvTQPEjNy/view?usp=sharing"
        document.getElementById("botonDescargar").style.visibility = "visible";
        document.getElementById("botonDescargar").style.color = "white";
        textoSistemas = "Linux x64bits"
    }

    else if(tipoPc == 6 ){
        document.getElementById("botonDescargar").href = 
        "https://drive.google.com/file/d/1Jvw8qJ-34WZnn8x0rrgNnqSHxaO5X8Tn/view?usp=sharing"
        document.getElementById("botonDescargar").style.visibility = "visible";
        document.getElementById("botonDescargar").style.color = "white";
        textoSistemas = "Linux ARM x64 Bits"
    }

    document.getElementById("tipoSistema").innerHTML = textoSistemas;
    document.getElementById("tipoSistema").style.color = "white";

}
