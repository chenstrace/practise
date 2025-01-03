#IfWinActive ahk_class VanDyke Software - SecureCRT
    ; Alt + T sends Alt + N
    !t::Send !n
#IfWinActive


#IfWinActive
    F15::Send {Esc}
#IfWinActive

; Alt + L sends Ctrl + Alt + Z
!l::Send ^!z

!+p::Send KevinCJL15

