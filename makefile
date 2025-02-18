# When Local is enabled the program will read from the input.txt file
# When Local is disabled the program will read from the standard input
INPUT_MODE = -DLOCAL

crafting:
	gcc ./1000/Crafting/Crafting.cpp -o ./1000/Crafting/Crafting $(INPUT_MODE)

Halloumi:
	gcc ./800/Halloumi/Halloumi.cpp -o ./800/Halloumi/Halloumi $(INPUT_MODE)

LineTrip:
	g++ ./800/LineTrip/LineTrip.cpp -o ./800/LineTrip/LineTrip $(INPUT_MODE)

CoverInWater:
	g++ ./800/CoverInWater/CoverInWater.cpp -o ./800/CoverInWater/CoverInWater $(INPUT_MODE)

DontTryToCount:
	g++ ./800/DontTryToCount/DontTryToCount.cpp -o ./800/DontTryToCount/DontTryToCount $(INPUT_MODE)

TargetPractice:
	g++ ./800/TargetPractice/TargetPractice.cpp -o ./800/TargetPractice/TargetPractice $(INPUT_MODE)

AmbitiousKid:
	g++ ./800/AmbitiousKid/AmbitiousKid.cpp -o ./800/AmbitiousKid/AmbitiousKid $(INPUT_MODE)

Buttons:
	g++ ./800/Buttons/Buttons.cpp -o ./800/Buttons/Buttons $(INPUT_MODE)

Coins:
	g++ ./800/Coins/Coins.cpp -o ./800/Coins/Coins $(INPUT_MODE)

WeNeedAZero:
	g++ ./800/WeNeedAZero/WeNeedAZero.cpp -o ./800/WeNeedAZero/WeNeedAZero $(INPUT_MODE)

MakeItBeautiful:
	g++ ./800/MakeItBeautiful/MakeItBeautiful.cpp -o ./800/MakeItBeautiful/MakeItBeautiful $(INPUT_MODE)

Unsorting:
	g++ ./800/Unsorting/Unsorting.cpp -o ./800/Unsorting/Unsorting $(INPUT_MODE)

UnitArray:
	g++ ./800/UnitArray/UnitArray.cpp -o ./800/UnitArray/UnitArray $(INPUT_MODE)

ExtremelyRound:
	g++ ./800/ExtremelyRound/ExtremelyRound.cpp -o ./800/ExtremelyRound/ExtremelyRound $(INPUT_MODE)

BlankSpace:
	g++ ./800/BlankSpace/BlankSpace.cpp -o ./800/BlankSpace/BlankSpace $(INPUT_MODE)