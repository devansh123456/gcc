/* { dg-do compile } */
/* { dg-prune-output "conflicting types for built-in" } */

void *memmove ();

void *
bar ()
{
  return memmove ();
}
