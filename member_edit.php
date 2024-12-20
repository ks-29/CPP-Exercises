// member_edit.php
<!DOCTYPE HTML>
<?php
	require_once 'session.php';
	require_once 'account_name.php';
?>
<html lang = "eng">
	<head>
		<meta charset =  "UTF-8">
		<link rel = "stylesheet" type = "text/css" href = "css/bootstrap.css" />
		<link rel = "stylesheet" type = "text/css" href = "css/jquery.dataTables.css" />
		<meta name = "viewport" content = "width=device-width, initial-scale=1" />
		<title>Simple Membership  System</title>
	</head>
<body class = "alert-warning">
	<nav class  = "navbar navbar-inverse">
		<div class = "container-fluid">
			<div class = "navbar-header">
				<a class = "navbar-brand">Membership System</a>
			</div>
				<ul class="nav navbar-nav navbar-right">
					<li><a><span class = "glyphicon glyphicon-user"></span> <?php echo $acc_name?></a></li>
					<li class="dropdown">
						<a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">Settings <span class="caret"></span></a>
						<ul class="dropdown-menu">
						<li><a href="logout.php">Logout</a></li>
						</ul>
					</li>
				</ul>
		</div>
	</nav>
	<div class = "container-fluid">
		<ul class="nav nav-pills">
			<li><a href="home.php">Home</a></li>
			<li><a href="account.php">Account</a></li>
			<li class="active"><a href="member.php">Member</a></li>
			<li><a href="club.php">Club</a></li>
		</ul>
		<br />
		<div class = "col-md-12 well">
			<a class = "btn btn-success" href = "member.php"><span class = "glyphicon glyphicon-hand-right"></span> Back</a>
			<br/>
			<br/>
			<div class = "alert alert-warning">Member / Update</div>
			<div class = "row">	
				<div class = "col-md-2 ">
				</div>
				<div class = "col-md-2">
				</div>
				<div class = "col-md-4">
					<?php
						$acc_query = $conn->query("SELECT * FROM `member` WHERE mem_id = '$_REQUEST[mem_id]'") or die(mysqli_error());
						$acc_fetch = $acc_query->fetch_array();
					?>
					<form method = "POST">
						<div class = "form-group">
							<label>Firstname</label>
							<input  id = "firstname" type = "text" value = "<?php echo $acc_fetch['firstname']?>" class = "form-control" />
							<input  id = "mem_id" type = "hidden" value = "<?php echo $acc_fetch['mem_id']?>" class = "form-control" />
						</div>
						<div class = "form-group">
							<label>Lastname</label>
							<input type = "text" id = "lastname" type = "text" value= "<?php echo $acc_fetch['lastname']?>" class = "form-control" />
						</div>
						<div id = "loading">
						</div>
						<br />
						<div class = "form-group">
							<button  type = "button" id = "mem_edit" class = "btn btn-warning form-control"><span class = "glyphicon glyphicon-edit"></span> Save Changes</button>
						</div>
					</form>
				</div>
			</div>	
		</div>
	</div>
	<footer class = "navbar navbar-fixed-bottom navbar-inverse">
	</footer>
</body>	
<script src = "js/jquery-3.1.1.js"></script>
<script src = "js/bootstrap.js"></script>
<script src = "js/script.js"></script>
<script src = "js/jquery.dataTables.min.js"></script>
<script type = "text/javascript">
	$(document).ready(function(){
		$('#table').DataTable();
	})
</script>
</html>