<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>站内新闻管理</title>
<link href='css/base.css' rel='stylesheet' type='text/css'>
</head>
<body background='images/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" align="center" cellpadding="2" cellspacing="1" bgcolor="#D6D6D6">
  <tr> 
    <td height="24" colspan="6" background="images/tbg.gif">
    	<table width="99%" border="0" cellspacing="0" cellpadding="0">
        <tr>
          <td><strong>&nbsp;站内新闻管理</strong></td>
          <td align="right">
		  [<a href="mynews_add.php"><u>新增一则站内新闻</u></a>]
		  </td>
        </tr>
      </table>
    </td>
  </tr>
  <tr align="center" bgcolor="#FBFCE2"> 
    <td height="26">新闻ID</td>
    <td>新闻标题</td>
    <td>所属频道</td>
    <td>更新时间</td>
    <td>发布人</td>
    <td>操作</td>
  </tr>
  <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
  <tr align="center" height="26" bgcolor="#FFFFFF" onMouseMove="javascript:this.bgColor='#FCFDEE';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
    <td width="8%"><?php echo $fields['aid']; ?></td>
    <td width="30%"><?php echo $fields['title']; ?></td>
    <td width="16%"><?php echo $fields['typename']; ?></td>
    <td width="14%"><?php echo GetDateMk($fields['senddate']); ?></td>
    <td width="16%"><?php echo $fields['writer']; ?></td>
    <td width="16%">
	<a href='mynews_edit.php?aid=<?php echo $fields['aid']; ?>'>[修改]</a>
	<a href='mynews_edit.php?dopost=del&aid=<?php echo $fields['aid']; ?>'>[删除]</a>
	</td>
  </tr>
  <?php
}
}?>
  <tr align="center" bgcolor="#F9FBF2"> 
    <td height="26" colspan="6">
    	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '6';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</table>
</body>
</html>