void f1()
{
  try {
    // ...
    f2();
    // ...
  } catch (std::exception& e) {
    // ...code that handles the error...
  }
}
void f2() { ...; f3(); ...; }
void f3() { ...; f4(); ...; }
void f4() { ...; f5(); ...; }
void f5() { ...; f6(); ...; }
void f6() { ...; f7(); ...; }
void f7() { ...; f8(); ...; }
void f8() { ...; f9(); ...; }
void f9() { ...; f10(); ...; }
void f10()
{
  // ...
  if ( /*...some error condition...*/ )
    throw some_exception();
  // ...
}
