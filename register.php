<?php
include"connection.php";

if(isset($_POST['register'])){
    $firstName=mysqli_real_escape_string($link, $_POST['fname']);
    $lastName=mysqli_real_escape_string($link, $_POST['lname']);
    $usercode=mysqli_real_escape_string($link, $_POST['usercode']);
    $userName=mysqli_real_escape_string($link, $_POST['username']);
    $password=mysqli_real_escape_string($link, $_POST['password']);
    $ssimu=mysqli_real_escape_string($link, $_POST['phone']);
   
    $query3="INSERT INTO pupils (user_code, first_name, last_name, username, passwords, phone_number) VALUES('$usercode', '$firstName', '$lastName', '$userName', '$password', '$ssimu');";

    if(mysqli_query($link, $query3)){
        header("Location:register.php");
    }


}


?>




<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>KCES</title>
</head>
<body>
    <?php require ("header.php"); ?>
    <h2>Pupil's registration page</h2>

    <div>
<form action="register.php" method ="POST">

<label for="fname">FIRST NAME</label>
<input type="text" name="fname">
<label for="lname">LAST NAME</label>
<input type="text" name="lname">
<label for="usercode">USER CODE</label>
<input type="text" name="usercode">
<label for="username">USER NAME</label>
<input type="text" name="username">
<labe>PASSWORD</label>
<input type="password" name = "password">
<label for="phone">PHONE NUMBER</label>
<input type="tel" name="phone">
<button type="submit" name="register">REGISTER </button>
<button> <a href="#"> HOME</a> </button>

</form>
    </div>
</body>
</html>