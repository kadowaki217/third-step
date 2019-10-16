science = [65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70] #scienceの配列
english = [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84] #englishの配列

class Array
	def sum
		reduce(:+)
	end

	def mean
		sum.to_f / size
	end

	def var
		m = mean
		reduce(0) { |a,b| a + (b - m) ** 2 } / (size - 1)
	end

	def sd
		Math.sqrt(var)
	end
end

print("-----science-----\n")
print("平均点：",science.mean)
print("標準偏差:",science.sd)
print("合計:",science.sum)
print("\n\n")

print("-----english-----\n")
print("平均点：",english.mean)
print("標準偏差:",english.sd)
print("合計:",english.sum)
print("\n\n")

print("偏差値\n")
print("-----science-----\n")
for s in science do
	print 10 * (s - science.mean) / science.sd + 50
	print ("\n")
end
print("\n")

print("-----english-----\n")
for e in english do
	print 10 * (e - english.mean) / english.sd + 50
	print ("\n")
end
print("\n")

print("点数の高い順\n")
print("-----science-----\n")
newsci = science.reverse
p newsci
print("\n")

print("-----english-----\n")
neweng = english.reverse
p neweng
