if loader.SetShowthreadsplot ~= nil then
	loader.SetShowthreadsplot(0)
end

local selectedAPIIndex = 0
if loader.GetSelectAPI ~= nil then
	selectedAPIIndex = loader.GetSelectAPI()
end

if loader.RequestScreenshotCapture ~= nil then
	loader.RequestScreenshotCapture("API" .. selectedAPIIndex .. "_" .. "TurnOffPlots")
end