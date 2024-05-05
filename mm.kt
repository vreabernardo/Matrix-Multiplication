import kotlin.random.Random

fun createRandomMatrix(rows: Int, cols: Int): Array<Array<Float>> {
    return Array(rows) { Array(cols) { Random.nextFloat() } }
}

fun printMatrix(label: String, matrix: Array<Array<Float>>) {
    println(label)
    for (row in matrix) {
        for (value in row) {
            print("${"%.2f".format(value)}\t")
        }
        println()
    }
}

fun main() {
    val rows = 5
    val cols = 5

    val A = createRandomMatrix(rows, cols)
    printMatrix("Matrix A:", A)
    
    val B = createRandomMatrix(rows, cols)
    printMatrix("Matrix B:", B)

    // Initialize result matrix for matrix multiplication
    val R = Array(rows) { Array(cols) { 0.0f } }

    for (r in 0 until rows) {
        for (c in 0 until cols) {
            for (k in 0 until cols) {
                R[r][c] += A[r][k] * B[k][c]
            }
        }
    }

    printMatrix("Resultant Matrix (A * B):", R)
}

