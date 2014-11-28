[field:typelink/][field:imglink/]
[field:textlink/]([field:pubdate function=MyDate('m-d',@me)/])
[field:senddate runphp='yes'] 

$ntime = time();

$oneday = 3600 * 24;

if(($ntime - @me)<$oneday) @me = "<font color='red'>(new)</font>";

else @me = "";

[/field:senddate]

[field:infos/]<br/><br/>