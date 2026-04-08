@echo off
cd /d "C:\Users\mahid\Desktop\Programming stuff\Daily_Code"
git add .
git commit -m "Auto-update: %date% %time%"
git push origin main