<?php
include "connection.php";
$message= "";
if (isset($_POST['deactivate'])) {
    $userCode = mysqli_real_escape_string($link, $_POST['usercode']);
    $query5 = "UPDATE pupils SET mystatus='DEACTIVATED' WHERE user_code='$userCode';";
    mysqli_query($link, $query5);
    $message='<h5 style= "background-color:cadetblue; font-size:20px; 
        text-align:center; padding:10px 0px;">'.$userCode.' '.'has been deactivated'.'</h5>';
}
if (isset($_POST['activate'])) {
    $userCode = mysqli_real_escape_string($link, $_POST['usercode']);
    $query6 = "UPDATE pupils SET mystatus='ACTIVATED' WHERE user_code='$userCode';";
    mysqli_query($link, $query6);
    $message='<h5 style= "background-color:cadetblue; font-size:20px; 
        text-align:center; padding:10px 0px;">'.$userCode.' '.'has been activated'.'</h5>';
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

    <style>
        .content label {
            margin-bottom: 10px;
        }

        .content form div {
            margin: 30px auto;
        }
    </style>
    <title>KCES</title>
</head>

<body>
    <?php require("header.php"); ?>


    <div class="wrapper">
        <div class="dash-board">
            <a href="pupils.php">
                <div class="p-4"> <img src="activation2.png" alt=""> Pupil's Details</div>
            </a>
            <a href="register.php">
                <div class="p-4"><img src="register.jpg" alt="">Register Pupil</div>
            </a>
            <a href="assign.php">
                <div class="p-4"> <img src="assignment.png" alt="">Post Assignment</div>
            </a>
            <a href="status.php">
                <div style=" background-color: cadetblue;" class="p-4"> <img src="status.jpg" alt="">Change Pupil's Status</div>
            </a>
            <a href="reports.php">
                <div class="p-4"><img src="report.png" alt="">Reports</div>
            </a>
            <a href="requests.php">
                <div class="p-4"> <img src="activation2.png" alt=""> Activation Requests</div>
            </a>


        </div>

        <div class="content">

            <form action="status.php" method="POST">
                <?php echo $message ?>
                <h2>Status page</h2>
                <label for="usercode">USER CODE</label>
                <input type="text" name="usercode" placeholder="Enter user code here...">
                <div>
                    <button class="btn" type="submit" name="activate">ACTIVATE </button>
                    <button class="btn" type="submit" name="deactivate">DEACTIVATE </button>
                    <div>
            </form>

        </div>
    </div>

    <?php include "footer.php"; ?>


</body>

</html>