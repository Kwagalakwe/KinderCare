<?php
include "connection.php";


$sql = "SELECT AssignmentID, user_code, duration,scores  from scores ORDER BY AssignmentID";
$result = mysqli_query($link, $sql);
// $result = mysqli_fetch_all($re);
// print_r($result);

if (isset($_POST['Scomment'])) {
    $assignmentID = $_POST['assID'];
    $usercode = $_POST['userID'];
    $Comment = $_POST['comment'];

    $query = "UPDATE scores SET comment='$Comment' WHERE AssignmentID='$assignmentID' AND user_code='$usercode';";

    mysqli_query($link, $query);
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

    <title>Document</title>

    <style>
        .content {
            padding: 40px !important;
            width: 80% !important;
        }

        .scores {
            background-color: #ccc !important;
            padding: 10px !important;
            /* background-color: #ccc!important; */
            height: 50px !important;
        }

        .comment {
            display: flex;
            justify-content: space-between;

        }

        .comment input {
            width: 250px !important;
            flex: 1;
            /* margin-right: 10px; */
        }

        .comment .btn {
            margin: 0 !important;
        }
    </style>
</head>

<body>

    <?php include "header.php" ?>
    <div class="wrapper">
        <div class="dash-board">

            <a href="register.php">
                <div class="p-4"><img src="register.jpg" alt="">Register Pupil</div>
            </a>
            <a href="assign.php">
                <div class="p-4"> <img src="assignment.png" alt="">Post Assignment</div>
            </a>
            <a href="scores.php">
                <div style=" background-color: cadetblue;" class="p-4"> <img src="activation2.png" alt=""> Pupil Scores</div>
            </a>
            <a href="status.php">
                <div class="p-4"> <img src="status.jpg" alt="">Change Pupil's Status</div>
            </a>
            <a href="reports.php">
                <div class="p-4"><img src="report.png" alt="">Reports</div>
            </a>
            <a href="requests.php">
                <div class="p-4"> <img src="activation2.png" alt=""> Activation Requests</div>
            </a>

        </div>

        <div class="content container">
            <!-- <div class="container"> -->
            <table class="table table-bordered table-striped m-4">
                <thead></thead>
                <tr>
                    <th>ASSIGNMENT ID</th>
                    <th>USER CODE</th>
                    <th>DURATION</th>
                    <th>SCORES</th>
                    <th>ADD COMMENT</th>
                </tr>
                <?php foreach ($result as $key) : ?>
                    <tr>
                        <td><?php echo $key['AssignmentID']; ?> </td>
                        <td><?php echo $key['user_code']; ?> </td>
                        <td><?php echo $key['duration']; ?> </td>
                        <td><?php echo $key['scores']; ?> </td>
                        <td>
                            <form class="scores" action="scores.php" method="POST">
                                <input type="hidden" name="assID" value="<?php echo $key['AssignmentID']; ?>">
                                <input type="hidden" name="userID" value="<?php echo $key['user_code']; ?>">
                                <div class="comment">
                                    <input type="text" name="comment">
                                    <button class="btn btn-sm" type="submit" name="Scomment">COMMENT</button>
                                </div>
                            </form>
                        </td>

                    </tr>
                <?php endforeach; ?>
            </table>

            <!-- </div> -->

        </div>
    </div>
    <?php include "footer.php"; ?>

</body>

</html>