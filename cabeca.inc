
<html>
 <head><link rel="stylesheet" type="text/css" href="estilo.css"></head>
 <body>
  <table width="100%" cellpadding="0" cellspacing="0" >
   <tr>
    <td><img src="imagem.jpg" width="100px" height="100px" ></td>
    <td style="font-size=14px; " >
     <?php
      function retorna_data()
      {
       $agora = time();
       $data = getdate($agora);
       if($data["wday"]==0) { echo "Domingo, "; }
       elseif ($data["wday"]==1) { echo "Segunda, "; }
       elseif ($data["wday"]==2) { echo "Terça, "; }
       elseif ($data["wday"]==3) { echo "Quarta, "; }
       elseif ($data["wday"]==4) { echo "Quinta, "; }
       elseif ($data["wday"]==5) { echo "Sexta, "; }
       elseif ($data["wday"]==6) { echo "Sábado, "; }
       if($data["mon"]==1) { $mes = "Janeiro"; }
       elseif ($data["mon"]==2) { $mes = "Fevereiro"; }
       elseif ($data["mon"]==3) { $mes = "Março"; }
       elseif ($data["mon"]==4) { $mes = "Abril"; }
       elseif ($data["mon"]==5) { $mes = "Maio"; }
       elseif ($data["mon"]==6) { $mes = "Junho"; }
       elseif ($data["mon"]==7) { $mes = "Julho"; }
       elseif ($data["mon"]==8) { $mes = "Agosto"; }
       elseif ($data["mon"]==9) { $mes = "Setembro"; }
       elseif ($data["mon"]==10) { $mes = "Outubro"; }
       elseif ($data["mon"]==11) { $mes = "Novembro"; }
       elseif ($data["mon"]==12) { $mes = "Dezembro"; }      
       $data_atual = $data["mday"]." de ".$mes." de ".$data["year"];
       return $data_atual;
      }
      $hoje = retorna_data();
      echo $hoje ;
     ?>
     </p> 
     <hr>
    </td>
   </tr>
  </table>
 </body>
</html>
