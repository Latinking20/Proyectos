<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title>Estudio de las variables Php</title>
    </head>
    <body>
        <h3> Nombre del articulo </h3>
        <?php
        $Producto = "Bolso para Dama";
        echo "$Producto";
        ?>
        <h3>Color </h3>
        <?php
        $Color = "Rojo";
        echo "$Color";
        ?>
        <h3> Modelo </h3>
        <?php
        $Modelo = "Bolso de mano";
        echo "$Modelo";
        ?>
        <h3> Cantidad </h3>            
        <?php
        $Cantidad = "5 unidades";
        echo "$Cantidad";
        ?>
        <h3> Precio </h3>
        <?php
        $Precio = 200000;
        echo "$Precio";
        ?>
        <h3> Prorcentaje de descuento </h3>
        <?php
        $Porcentaje = 0.15;
        echo "$Porcentaje";
        ?>
        <h3> Valor del descuento </h3>
        <?php
        $Descuento = 200000 * 0.15;
        echo "$Descuento";
        ?>
        <h3> Valor neto de la compra </h3>
        <?php
        $Neto = 200000 - 30000;
        echo "$Neto";
        ?>
        <h3> Valor por unidad </h3>
        <?php
        $Vunidad = 5 * 170000;
        echo "$Vunidad";
        ?>
    
</html>
