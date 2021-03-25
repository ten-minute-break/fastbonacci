# fastbonacci

Task: calculate the Nth fibonacci number, fast! :)
How fast will your version be and what trickery will you use to surpass the awesome speed of the function above?

The maximal N for which we'll test is whatever can fit within `long`! :)

# Note

The benchmark utility used in `main.cpp` will run the program for several thousand runs, and (for the long runs) do some pre-validation of inputs, to check whether the submitted functions actually return the correct output. The values output by the benchmark include:

- min: the real minimal time measured with N (=10000) samples
- low: the 100th lowest time - useful to show how many samplings were actually freaks of nature
- avg: average time - useful to show how fast in general our algorithm is
- med: median time - the midpoint of the sorted time results, useful to distinguish when the average times are close
- hi:  the 100th highest time - useful to show how many samplings were actually your CPU dying
- max: the real maximal time measured with N samples

Remember that the submitted code samples **aren't** representative of anything except for that person's will to try out things and experiment with random things. This is a great chance to test out wild theories that just might work, so give it a chance! :)
