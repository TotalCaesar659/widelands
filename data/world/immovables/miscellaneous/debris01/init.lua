push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "debris01",
   descname = _ "Debris",
   size = "small",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 35, 35 },
      },
   }
}

pop_textdomain()
