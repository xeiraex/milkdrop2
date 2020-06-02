MilkDrop 2 development README

Author:       Ryan Geiss
Last updated: 18 May 2013

GETTING STARTED

To get started, either download the .zip file here (which contains a snapshot
of the MilkDrop 2 source code on 5/13/13, the day it was open-sourced), or
go to 'code' tab and execute the 'git clone' command given there to pull down
the source.

To build the Winamp / Windows version (which is the only build supported
so far), you'll need Visual Studio [Visual C++] 2008 or later.  (The free 
'Express' editions of Visual Studio will work just fine, and they give you
all the functionality.)

Once it's installed, open Visual Studio and open the project 
"src/vis_milk2/milkdrop_DX9.sln".  Then select either the Debug or Release
configuration, whichever you want.  Then build it.

If it gets through the compile and link but then gives an error when 
trying to write the final binary (vis_milk2.dll) to disk, do the following:
In the Solution Explorer, right click on the "vis_milk2" project and click 
Properties.  Then, under Configuration Properties, click on Linker.  To the 
right, the first item you'll see is "Output File", and it will be set to 
"$(ProgramFiles)\Winamp\plugins\vis_milk2.dll" (without the double quotes).
You might have to change this to write the file to some "normal" directory,
rather than the (proteted) Program Files directory.  Then, after building,
you'll want to manually copy vis_milk2.dll to the Winamp\Plugins directory
(and repeat this each time you build) (or maybe try starting Visual Studio
as an Administrator, so it can just write the file to where you want it,
in the first place).

Once the .DLL under Program Files is updated, you can start Winamp.  Hit
CTRL+K to select MilkDrop 2 as your visualizer; hit ALT+K to configure it
(optional); or play some music and then click the 'visualization' tab to 
start it.  Double-click the visualization to go full-screen.

You can attach the Visual Studio debugger to MilkDrop while it is running,
as long as the DLL that's running matches the source code in Visual Studio.
From within Visual Studio, just go to the Debug menu and select 'Attach
to Process'.  Then find Winamp.exe and it should start.  You can then 
see debug output in the visual studio window, set breakpoints, move the
instruction pointer around, look at variable values, and even
modify code once a breakpoint is hit -- the compiler will recompile it
on-the-fly and you'll just keep going.  (The Visual Studio debugger is
absolutely mind-blowingly awesome.)

You'll also need to have some preset files (*.milk) in 
$(ProgramFiles)\Winamp\Plugins\Milkdrop2\presets, but if you installed Winamp,
then there will already be some there for you to play with.

To learn how to alter or author new MilkDrop presets, see
$(ProgramFiles)\Winamp\Plugins\Milkdrop2\docs\milkdrop_preset_authoring.html.
