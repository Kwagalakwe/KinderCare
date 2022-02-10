<?php
include "connection.php";

if (isset($_POST['signup'])) {
    $firstName = mysqli_real_escape_string($link, $_POST['fname']);
    $lastName = mysqli_real_escape_string($link, $_POST['lname']);
    $userName = mysqli_real_escape_string($link, $_POST['username']);
    $password = mysqli_real_escape_string($link, $_POST['password']);

    $query = "INSERT INTO teachers (first_name, last_name, username, passwords) VALUES('$firstName', '$lastName','$userName', '$password');";
    if (mysqli_query($link, $query)) {
        header("Location:index.php");
    }
}


?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="styles.css">
    <link rel="stylesheet" href="css/bootstrap.css">
    <title>KCES</title>

    <style>
       .container form{
            width: 400px !important;
            height: 600px !important;
        }
    </style>
</head>

<body>
    
<header>

    <div class="header_image ">
        <img width="70px" height="70px" src="kinder.png" alt="ABC">
        <figcaption> <b>Learning Together</b></figcaption>
    </div>

    <h1 class="head">KINDER CARE E-LEARNING SYSTEM</h1>

    <button class="btn btn-secondary">
            <div>  <a href="index.php">LOGIN</a></div>
    </button>


</header>
    <div class="container">
        <form action="signup.php" method="POST" class = "p-4">
            <fieldset class="login">
                <legend>
                    <h2>SIGN UP</h2>
                </legend>
                <label for="fname" class = "form-label">FIRST NAME</label>
                <input type="text" name="fname" class = "form-control" required>
                <label for="lname" class = "form-label">LAST NAME</label>
                <input type="text" name="lname" class = "form-control" required>
                <label for="username" class = "form-label">USERNAME</label>
                <input type="text" name="username" class = "form-control" required>
                <label class = "form-label">PASSWORD</label>
                    <input type="password" name="password" class = "form-control" required>
                    <button class="btn btn-sm btn-secondary" type="submit" name="signup">SIGN UP </button>
                    <p>Already have an account? <a href="index.php"> Log in </a> </p>
            </fieldset>
        </form>
    </div>

    <?php include "footer.php"; ?>


</body>

</html>