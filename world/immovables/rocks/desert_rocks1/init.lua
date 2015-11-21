dirname = path.dirname(__file__)

animations = {
   idle = {
      template = "idle",
      directory = dirname,
      hotspot = { 38, 82 }
   },
}

world:new_immovable_type{
   name = "desert_rocks1",
   descname = _ "Rocks 1",
   editor_category = "rocks",
   size = "big",
   attributes = { "rocks" },
   programs = {
      shrink = {
         "remove="
      }
   },
   animations = animations
}
