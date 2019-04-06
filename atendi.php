
<html>
 <head>
  <link rel="stylesheet" type="text/css" href="style2.css">
  <meta http-equiv="content-type" content="text/html" />
  <meta charset="UTF-8" />
  <meta name="author" content="Tacial" />
  <meta name="Description" content="Contato com TaCiAl... ">
  <meta name="Keywords" content="contato conosco">
  <title> Contato </title>
 </head>
 <body>
  <div id="global">
   <!-- div cabecalho-->
   <?php
     include "cabeca.inc"; 
     include "menu.inc";
   ?>
      <hr>
      <br />
       <p align="center">"Quando almejamos uma vida sem dificuldades, lembremo-nos de que o carvalho cresce forte <br>
        sob a força dos ventos e que os diamantes são feitos sob pressão".<br>
       (Peter Marshall)</p>
      <br />
      <br />  
    <h1 align="center">Contato</h1>
    <hr>
    <h4 align="center">Para dúvidas, sugestões, comentários ou mais informações<br>
      entre em contato com a gente.</h4>
    
    <h4 align="center">Envie um E-mail para nós</h4>
    <hr />
    <form align="center" id="form1" action="https://formspree.io/tacial@hotmail.com" method="POST">
     <fieldset>
      <table>
       <tr><td> Digite sua mensagem e seu nome: </td><td><textarea id="msg" name="nome" rows="5" cols="50" placeholder="Digite sua Mensagem"></textarea></td></tr>
       <tr><td> Digite seu email: </td><td><input type="email" name="_replyto" id="email" size=45 placeholder="Digite seu E-mail"></td></tr>
      </table>
      <input type="submit" value="Enviar">
     </fieldset>
    </form>
    <br />
    <hr>

    <br />
    <br />
    <a href="index.php">Voltar</a>
    <?php include "rodape.inc"; ?>
  </body>
</html>