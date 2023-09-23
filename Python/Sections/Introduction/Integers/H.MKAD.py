v, t = map(int, input().split())
print( (v * t % 109 + 109) % 109 + 1 )