defmodule Divisors do
  def count(x) do
    (1..(max 1, (trunc :math.sqrt x))|> Enum.count(fn(i) -> rem(x, i) == 0 end)) * 2 + 1
  end
end

Stream.iterate(1, &(&1+1))
|> Enum.reduce_while(0, fn(i, a) ->
  if ((Divisors.count(a)) <= 500), do: {:cont, a + i}, else: {:halt, a}
end)
|> IO.puts
