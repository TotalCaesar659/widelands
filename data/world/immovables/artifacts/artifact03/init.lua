push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "artifact03",
   descname = _ "Artifact",
   size = "small",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 14, 20 },
      },
   }
}

pop_textdomain()
