local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "zinxware.cc/", HidePremium = false, SaveConfig = true, ConfigFolder = "OrionTest"})

function notify()
	OrionLib:MakeNotification({
	Name = "Injected...",
	Content = "Tá tirando?, e o zezinx come anti-cheat de rato!!!",
	Image = "rbxassetid://4483345998",
	Time = 15
})
end

function scriptinject()
	loadstring(game:HttpGet(('https://raw.githubusercontent.com/zezinx/hub1/main/hubone.lua')))()
end

local Tab = Window:MakeTab({
	Name = ".cc/inject",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})
Tab:AddButton({
	Name = "Inject Silent Aim",
	Callback = function()
      		notify()
			scriptinject()
  	end    
})
