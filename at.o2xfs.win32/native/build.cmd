@ECHO OFF
IF NOT "%VS90COMNTOOLS%" == "" (
	CALL "%VS90COMNTOOLS%vsvars32.bat"
) ELSE IF NOT "%VS120COMNTOOLS%" == "" (
	CALL "%VS120COMNTOOLS%vsvars32.bat"
)
nmake make_win32.mak