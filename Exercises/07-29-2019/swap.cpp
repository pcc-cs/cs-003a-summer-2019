template <class T>
void gSwap(T *ap, T *bp) {
  T t = *ap;
  *ap = *bp;
  *bp = t;
}
