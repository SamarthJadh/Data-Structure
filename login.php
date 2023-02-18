<?php
// Start a session to persist user information across multiple pages
session_start();

// Check if the form was submitted
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
  // Retrieve the submitted username and password
  $username = $_POST['username'];
  $password = $_POST['password'];

  // Perform authentication
  if ($username === 'myusername' && $password === 'mypassword') {
    // Authentication successful, redirect to the homepage or any other page
    $_SESSION['username'] = $username;
    header('Location: homepage.php');
    exit;
  } else {
    // Authentication failed, show an error message
    $error = 'Invalid username or password';
  }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Login Page</title>
  <link rel="stylesheet" href="style.css">
</head>
<body>
  <div class="container">
    <div class="login-box">
      <h2>Login</h2>
      <?php if (isset($error)) { ?>
        <p class="error-message"><?php echo $error; ?></p>
      <?php } ?>
      <form action="<?php echo htmlspecialchars($_SERVER['PHP_SELF']); ?>" method="post">
        <div class="user-box">
          <input type="text" name="username" required="">
          <label>Username</label>
        </div>
        <div class="user-box">
          <input type="password" name="password" required="">
          <label>Password</label>
        </div>
        <button type="submit">Submit</button>
      </form>
    </div>
  </div>
</body>
</html>
