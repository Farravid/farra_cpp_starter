#include <benchmark/benchmark.h>
#include <print>

// TODO: Add the compile comands for using the includes

static void BM_SomeFunction(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    int x = 0;
    int y = 0;
    std::println("Hey bro");
  }
}
// Register the function as a benchmark
BENCHMARK(BM_SomeFunction);
// Run the benchmark
BENCHMARK_MAIN();