<?php
$z[0]=Array("typelink","",0,17);
$z[1]=Array("imglink","",17,33);
$z[2]=Array("textlink","",35,52);
$z[3]=Array("pubdate","",53,96);
$z[3][4]['function']="MyDate('m-d',@me)";
$z[4]=Array("senddate"," \r\n\r\n\$ntime = time();\r\n\r\n\$oneday = 3600 * 24;\r\n\r\nif((\$ntime - @me)<\$oneday) @me = \"<font color='red'>(new)</font>\";\r\n\r\nelse @me = \"\";\r\n\r\n",99,282);
$z[4][4]['runphp']="yes";
$z[5]=Array("infos","",286,300);

?>