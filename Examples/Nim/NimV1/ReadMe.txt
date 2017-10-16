Nim

	Display instructions
	Do
		Ask who should go first
		Get firstPlayer
	While firstPlayer <> P and firstPlayer <> C
	
	nimSticks = 22
	While nimSticks <> 0
	
		Display a message about the number of sticks left
		if its the users turn then
			do
				Ask for users move
				Get currentPlayerMove
			while currentPlayerMove < 1 or currentPlayerMove > 4
		else
			idealMove = nimSticks % 5
			if idealMove = 0 then
				currentPlayerMove = 1
			else
				currentPlayerMove = idealMove
			end if
			Display a message about the currentPlayerMove
		end if
		
		nimSticks = nimSticks - currentPlayerMove
		
		if nimSticks = 0 and the user just took sticks then
			Display You Won
		else
			Display Computer Won
		end if
		
	end while
	
end
