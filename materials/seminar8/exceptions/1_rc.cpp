int f1()
{
  // ...
  int rc = f2();
  if (rc == 0) {
    // ...
  } else {
    // ...code that handles the error...
  }
}
int f2()
{
  // ...
  int rc = f3();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f3()
{
  // ...
  int rc = f4();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f4()
{
  // ...
  int rc = f5();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f5()
{
  // ...
  int rc = f6();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f6()
{
  // ...
  int rc = f7();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f7()
{
  // ...
  int rc = f8();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f8()
{
  // ...
  int rc = f9();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f9()
{
  // ...
  int rc = f10();
  if (rc != 0)
    return rc;
  // ...
  return 0;
}
int f10()
{
  // ...
  if (...some error condition...)
    return some_nonzero_error_code;
  // ...
  return 0;
}
