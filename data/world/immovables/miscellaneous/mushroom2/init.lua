push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "mushroom2",
   descname = _ "Mushroom",
   size = "none",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 5, 7 },
      },
   }
}

pop_textdomain()
