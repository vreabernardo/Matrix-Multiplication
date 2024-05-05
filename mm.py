import numpy as np
import time

N = 4090

if __name__ == "__main__":
    A = np.random.randn(N, N).astype(np.float32)
    B = np.random.randn(N, N).astype(np.float32)
    
    flop = N * N * 2 * N
    
    st = time.monotonic()
    
    # N^2 output cells with 2N compute each
    C = A @ B

    et = time.monotonic()
    
    s=et-st

    print(f"{flop/s * 1e-9:.2f} GFLOPS")
    print(C)
