push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "cactus3",
   descname = _ "Cactus",
   size = "none",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 10, 71 },
      },
   }
}

pop_textdomain()
