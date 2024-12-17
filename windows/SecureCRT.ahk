#IfWinActive ahk_class VanDyke Software - SecureCRT
    ; Alt + T sends Alt + N
    !t::Send !n

    ; F15 sends Esc
    F15::Send {Esc}
#IfWinActive
