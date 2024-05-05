![e0d9e9e9222d3183007befa448265083](https://github.com/vreabernardo/Matrix-Multiplication/assets/45080358/e3d17d04-df80-4bd1-8f12-969987c09d3c)

- [x] C
- [x] Python
- [ ] Assembly
- [ ] Go
- [ ] BrainFuck
- [ ] Rust
- [x] Kotlin
- [ ] Java
- [ ] ...

### Notes on C:
- Does not work well with large matrices.
- Performance issues (slow as fuck!).

### Notes on kotlin:
- Test flops

```c
for (int r = 0; r < N; r++) {
  for (int c = 0; c < N; c++) {
    R[r][c] = 0;
    for (int k = 0; k < N; k++) {
      R[r][c] += M1[r][k] * M2[k][c];
    }
  }
}

